/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** init_SKELETON
*/

#include "rpg.h"

void init_shroom(rpg_t *rpg, entity_t *monster, VEC pos)
{
    monster->dir = 1;
    monster->id = SHROOM;
    monster->state = IDLE;
    monster->prev_state = IDLE;
    monster->pos = pos;
    monster->rect = (sfFloatRect){0, 0, 64, 150};
    monster->time = 0;
    set_animation(monster, rpg->asset->ma_shroom.idle, 1, NULL);
    monster->jump = (jump_t){0, 0, 2, 2};
    monster->roll = (roll_t){0};
    monster->attack = (attack_t){0, 0};
    monster->health = (health_t){0};
    monster->health.health = 500;
    monster->velocity = 0;
}