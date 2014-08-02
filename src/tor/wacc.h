/* Copyright (c) 2014, Razor Developers */
/* See LICENSE for licensing information */

/**
 * \file wacc.h
 * \brief Headers for wacc.cpp
 **/

#ifndef TOR_WACC_H
#define TOR_WACC_H

#ifdef __cplusplus
extern "C" {
#endif

    char const* wacc_tor_data_directory(
    );

    char const* wacc_service_directory(
    );

    int check_interrupted(
    );

    void set_initialized(
    );

    void wait_initialized(
    );

#ifdef __cplusplus
}
#endif

#endif

