/*
  This file is part of MAGO.

  Copyright (c) 2019 by Breno Viana

  MAGO is a free software; you can redistribute it and/or modify it under the
  terms of the MIT License.
*/

#ifndef _MAGO_BTGENERATOR_HPP_
#define _MAGO_BTGENERATOR_HPP_

#include "generator/generator.hpp"

/*!
 * \brief BTGenerator implements the Binary Tree Algorithm
 */
class BTGenerator : public Generator {
  public:
    /*!
     * \brief Generator constructor
     *
     * \param width
     *     Maze width
     * \param height
     *     Maze height
     */
    BTGenerator(size_t width, size_t height)
      : Generator(width, height) { /* empty */ }

    /*!
     * \brief
     *
     * \param v
     *     Vertical bound
     * \param h
     *     Horizontal bound
     * \param dv
     *     A vertical cardinal direction
     * \param dh
     *     A horizontal cardinal direction
     *
     * \return
     *     The generated maze
     */
    Maze* generate(size_t v, size_t h, Directions dv, Directions dh);

    Maze* generate();
};

#endif /* _MAGO_BTGENERATOR_HPP_ */
