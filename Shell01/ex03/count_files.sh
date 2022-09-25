#!/bin/bash
find . | wc -l | sed 's/^[ \t]*//'
