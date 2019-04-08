#!/bin/bash
grep -E "/products/" $1 | cut -f 1,4 | sort | uniq
