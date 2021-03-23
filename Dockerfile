FROM centos:7

RUN yum -y update && \
    yum groupinstall -y "Development Tools"


