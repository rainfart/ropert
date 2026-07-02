#!/usr/bin/env bash
set -euo pipefail

curl -L -O -S https://github.com/rainfart/ropert/raw/refs/heads/main/ropert
chmod u+rwx ropert
konsole --hold -e bash -lc './ropert; exec bash'
