ifconfig -a ether | grep ether | sed "s/.*ether //" | sed "s/ //"
