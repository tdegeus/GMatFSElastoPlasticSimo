/*

(c - MIT) T.W.J. de Geus (Tom) | www.geus.me | github.com/tdegeus/GMatElastoPlasticFiniteStrainSimo

*/

#ifndef GMATELASTOPLASTICFINITESTRAINSIMO_CONFIG_H
#define GMATELASTOPLASTICFINITESTRAINSIMO_CONFIG_H

#include <tuple>
#include <stdexcept>
#include <limits>
#include <math.h>
#include <iostream>
#include <vector>
#include <tuple>
#include <xtensor/xarray.hpp>
#include <xtensor/xtensor.hpp>
#include <xtensor/xnoalias.hpp>
#include <xtensor/xfixed.hpp>
#include <xtensor/xadapt.hpp>
#include <xtensor/xview.hpp>
#include <xtensor/xio.hpp>
#include <xtensor/xoperation.hpp>
#include <xtensor/xsort.hpp>
#include <xtensor/xmath.hpp>
#include <xtensor/xtensor_simd.hpp>
#include <xtensor/xtensor_config.hpp>


#ifdef GMATELASTOPLASTICFINITESTRAINSIMO_ENABLE_ASSERT

    #define GMATELASTOPLASTICFINITESTRAINSIMO_ASSERT(expr) \
        GMATELASTOPLASTICFINITESTRAINSIMO_ASSERT_IMPL(expr, __FILE__, __LINE__)

    #define GMATELASTOPLASTICFINITESTRAINSIMO_ASSERT_IMPL(expr, file, line) \
        if (!(expr)) { \
            throw std::runtime_error( \
                std::string(file) + ':' + std::to_string(line) + \
                ": assertion failed (" #expr ") \n\t"); \
        }

#else

    #define GMATELASTOPLASTICFINITESTRAINSIMO_ASSERT(expr)

#endif

#define GMATELASTOPLASTICFINITESTRAINSIMO_VERSION_MAJOR 0
#define GMATELASTOPLASTICFINITESTRAINSIMO_VERSION_MINOR 1
#define GMATELASTOPLASTICFINITESTRAINSIMO_VERSION_PATCH 0

#define GMATELASTOPLASTICFINITESTRAINSIMO_VERSION_AT_LEAST(x,y,z) \
    (GMATELASTOPLASTICFINITESTRAINSIMO_VERSION_MAJOR > x || (GMATELASTOPLASTICFINITESTRAINSIMO_VERSION_MAJOR >= x && \
    (GMATELASTOPLASTICFINITESTRAINSIMO_VERSION_MINOR > y || (GMATELASTOPLASTICFINITESTRAINSIMO_VERSION_MINOR >= y && \
                                                             GMATELASTOPLASTICFINITESTRAINSIMO_VERSION_PATCH >= z))))

#define GMATELASTOPLASTICFINITESTRAINSIMO_VERSION(x,y,z) \
    (GMATELASTOPLASTICFINITESTRAINSIMO_VERSION_MAJOR == x && \
     GMATELASTOPLASTICFINITESTRAINSIMO_VERSION_MINOR == y && \
     GMATELASTOPLASTICFINITESTRAINSIMO_VERSION_PATCH == z)

#endif
