# Use ubuntu 16.04
FROM ubuntu:16.04

#RUN apt-get update && apt-get -y dist-upgrade --fix-missing --fix-broken
#RUN apt-get update
#RUN apt-get update && apt-get install -y apt-transport-https
#RUN echo 'deb http://private-repo-1.hortonworks.com/HDP/ubuntu14/2.x/updates/2.4.2.0 HDP main' >> /etc/apt/sources.list.d/HDP.list
#RUN echo 'deb http://private-repo-1.hortonworks.com/HDP-UTILS-1.1.0.20/repos/ubuntu14 HDP-UTILS main' >> /etc/apt/sources.list.d/HDP.list
#RUN echo 'deb [arch=amd64] https://apt-mo.trafficmanager.net/repos/azurecore/ trusty main' >> /etc/apt/sources.list.d/azure-public-trusty.list

# install socat editor ssh
#RUN apt-get install curl netcat-openbsd vim nano openssh-server socat lib32ncurses5 python python-pip python-dev -y
#RUN apt-get install socat lib32ncurses5 -y
RUN apt-get update && apt-get install curl netcat-openbsd vim nano openssh-server socat lib32ncurses5 python python-pip python-dev -y

RUN adduser --disabled-password --gecos "" ksl
RUN echo "ksl:sebuahrahasiamas" | chpasswd

ADD chall/. /chall
WORKDIR /chall

RUN echo 'KSL{Y0u_N0w_H0w_contr0l_St4cK!1!1}'  > /chall/flag.txt # ubah isi flagnya

# Secure ENV

RUN echo 'alias kill="echo no kill please!"' >> ~/.bashrc
RUN chmod 700 /tmp /var/tmp /usr/bin/* /bin/* /dev/shm
RUN chmod 755 /usr/bin/env /bin/dash /bin/bash /bin/sh /bin/nc /bin/cat /usr/bin/curl /usr/bin/groups /usr/bin/id /bin/ls /usr/bin/python


RUN chown root:ksl /chall/diary64 # ubah nama file
RUN chmod 775 /chall/diary64 # ubah nama file

# Run Service

RUN echo '#!/bin/bash'"\n(socat TCP-LISTEN:7000,reuseaddr,fork EXEC:"/chall/diary64,su=nobody")" > /var/tmp/.start.sh && chmod +x /var/tmp/.start.sh

CMD ["/var/tmp/.start.sh"]
