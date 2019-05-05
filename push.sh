#!/bin/bash
chmod +x push.sh

COMMITNAME=$@

git add .
git commit -m "$@"
git push