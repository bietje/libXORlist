/*
 * (C) Michel Megens, 2012
 */

/** \file */

#include <stdlib.h>

#ifndef __LIST_H
#define __LIST_H
/**
 * \typedef NODE
 * \brief The linked list nodes the library works with.
 */
typedef struct xornode
{
        /**
         * \var pointer
         * \brief In the pointer variable are the previous and next pointer stored.
         * \var value
         * \brief Debug value.
         */
        void *pointer;
        unsigned int value;
} NODE;

/**
 * \fn xorll_get_next(NODE *prev, NODE *this)
 * \return The next node
 * \brief Calculates the next node.
 *
 * Uses the XOR functionality to calculate the next node from the previous and
 * the next pointer.
 */
NODE *xorll_get_next(NODE *prev, NODE *this);

/**
 * \fn xorll_list_insert(NODE *prev, NODE *this, NODE *new)
 * 
 * \param prev Previous pointer of <i>this</i>.
 * \param this The node will be after <i>this</i>
 * \param new The list node to add to the list.
 * \brief Adds <b>new</b> to the list.
 * 
 * \return The error code.
 * \warning <i>prev</i> and <i>this</i> MUST be consecutive.
 *
 * This function will insert the xornode node after the <i>this</i> node.
 */
int xorll_list_insert(NODE *prev, NODE *this, NODE *new);

#endif