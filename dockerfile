from gcc 
RUN apt-get update -y && apt-get -y install cmake
ENV SOURCES /home/root/workspace
RUN mkdir -p $SOURCES
WORKDIR $SOURCES/..
