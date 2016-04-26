/* Lite-On LTR-559ALS Linux Driver
*
* Copyright (C) 2016 Prema Chand Alugu (premaca@gmail.com)
*
* This program is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*
*/
#ifndef _LTR553_H
#define _LTR553_H

/*
 * This value is used when psensor is requested on demand and should be cleared
 * once the state is read by the requestor
 */
enum {
	LTR553_ON_DEMAND_RESET,
	LTR553_ON_DEMAND_COVERED,
	LTR553_ON_DEMAND_UNCOVERED,
	LTR553_ON_DEMAND_LAST,
};

#define LTR553_ON_DEMAND_DISTANCE_THRESHOLD 2

#endif /* _LTR553_H */
