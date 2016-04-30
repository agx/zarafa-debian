/*
 * Copyright 2005 - 2015  Zarafa B.V. and its licensors
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License, version 3,
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef UNIXCONFIGHECK_H
#define UNIXCONFIGHECK_H

#include "ECConfigCheck.h"

class UnixConfigCheck : public ECConfigCheck {
public:
	UnixConfigCheck(const char *lpszConfigFile);
	~UnixConfigCheck();

	void loadChecks();

private:
	static int testId(const config_check_t *);
};

#endif

