#ifndef _MAIN_H_
#define _MAIN_H_

/** @mainpage THE API
 * This page is the main page and presents:
 * 		- @ref main "Main"
 * 		- @ref getter_setter "Getters and Setters"
 *
 */

/// Two lines of info
/// for version
#define MAIN_VERSION "0.0.2"

/// Logger callback
 typedef void (*logger_func)(char* str);

//-----------------------
//  Functions
//-----------------------

/** \defgroup main
 * @{
 * @file main.h
 * @brief Contains main functions
 */

 /**
 * @brief Get version
 * @return Pointer to version string
 */
 const char *get_version(void);

 /**
 * @brief Initialize logger
 * @param[in] func: function pointer
 * @return Point of no return
 */
 void set_logger(logger_func func);
 
 #endif //_MAIN_H_
