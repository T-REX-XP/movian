/*
 *  Copyright (C) 2007-2015 Lonelycoder AB
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  This program is also available under a commercial proprietary license.
 *  For more information, contact andreas@lonelycoder.com
 */
#pragma once

typedef struct {
  void *r;
} hts_regex_t;

typedef struct {
  int rm_so;
  int rm_eo;
} hts_regmatch_t;

int hts_regcomp(hts_regex_t *r, const char *pat, const char **errmsg);


int hts_regexec(hts_regex_t *r, const char *text,
                int nmatches, hts_regmatch_t *matches);

void hts_regfree(hts_regex_t *r);
