

cd ../software
mv ./CECS-os/os-app ./os-app
mv ./CECS-os/os ./os
rm -rf ./CECS-os

cd ../Lab7
rm -rf ./os ./os-app
ln -s ../software/os os
ln -s ../software/os-app os-app
