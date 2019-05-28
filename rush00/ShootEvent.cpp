#include "ShootEvent.hpp"

ShootEvent::ShootEvent()
{
    this->_firstShoot = nullptr;
    return;
}

ShootEvent::ShootEvent( Player* player, EnemyEvent* enemyEvent ) : _player(player), _enemyEvent(enemyEvent)
{
    this->_firstShoot = nullptr;
    return;
}

ShootEvent::ShootEvent( ShootEvent const & src )
{
    *this = src;

    return;
}

ShootEvent::~ShootEvent()
{
    Shoot*      tmp;

    while(this->_firstShoot)
    {
        tmp = this->_firstShoot;
        this->_firstShoot = this->_firstShoot->next;
        delete tmp;
    }
}

ShootEvent &       ShootEvent::operator=( ShootEvent const & rhs )
{
    this->_firstShoot = rhs._firstShoot;

    return *this;
}

void                ShootEvent::newShoot()
{
    if (this->_firstShoot == nullptr)
    {
        this->_firstShoot = new Shoot(_player->getY() - 4, _player->getX() + 4);
        this->_firstShoot->next = nullptr;
        this->_firstShoot->prev = nullptr;
    }
    else
    {
        Shoot*      tmp = this->_firstShoot;

        while (tmp->next != nullptr)
            tmp = tmp->next;

        tmp->next = new Shoot(_player->getY() - 4, _player->getX() + 4);
        tmp->next->next = nullptr;
        tmp->next->prev = tmp;
    }
    return;
}

bool                ShootEvent::_checkRemove(Shoot* lst)
{
    Shoot*      tmp;

    if (lst->getY() < 0 || _enemyEvent->collision(lst->getY(),lst->getX()))
    {
        tmp = lst;

        if (lst == this->_firstShoot)
        {
            if (this->_firstShoot->next == nullptr)
                this->_firstShoot = nullptr;
            else
            {
                this->_firstShoot = this->_firstShoot->next;
                this->_firstShoot->prev = nullptr;
            }
        }
        else
        {
            lst->prev->next = lst->next;
            if (lst->next != nullptr)
                lst->next->prev = lst->prev;
        }

        delete tmp;
        tmp = nullptr;
        return true;
    }
    return false;
}

void                ShootEvent::updateShoots()
{
    Shoot*          tmp = this->_firstShoot;
    while(tmp != nullptr)
    {
        if (_checkRemove(tmp))
            tmp = this->_firstShoot;

        if (tmp == nullptr)
            break;

        tmp->updateXY();
        tmp->updateMove();
        tmp = tmp->next;
    }
}
