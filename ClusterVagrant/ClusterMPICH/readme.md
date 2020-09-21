# MPI Cluster Versions

![h3ct0rjs's MPI](https://github-readme-stats.vercel.app/api/pin/?username=h3ct0rjs&repo=FichaTecnica-ProyectoGrado&show_icons=true&theme=radical&hide=tex)

In order to create and deploy the MPI HPC Cluster and run all the _Vagrant_ Experiments after doing a few tests and check the progress over the time of how
the mpi cluster was improved I've three versions : 

- ***_Version 1:_*** Use a vagrant box based on ubuntu 16.04, the VagrantFile contains multiple code duplication and don't use Variables to set the number of cores.
- ***_Version 2:_*** Use a vagrant box based on ubuntu 16.04, fix VagrantFile code duplication, and use Variable to set the number of cores, memory and other hipervisors flags.
- ***_Version 3:_*** Use a vagrant box based on ubuntu 18.04, fix VagrantFile code duplication, fix operative system apt problem, add the last package updates of bionic.
    Optimize Vagrant box storage. 



# How to Run The MPI Cluster

All the versions follow the same idea, you will need to run the following commands : 

**Bringing up the MPI Cluster**

```bash
rubyuser@machine$ vagrant up 
```

**Destroying the MPI Cluster VMs**
```sh
user@machine$ vagrant destroy -f 
```

**Saving the State of the Cluster**

```sh
user@machine$ vagrant suspend
```

# How to Run MPI Programs using MPICHv3.3.2

You will need to use the shared folder between the host machine wich is the localfolder where the VagrantFile exist
and move to the NFS Folder in the following path : `/home/vagrant/cloud/`

**Compile and Run** 
```sh
vagrant@master-vm/cloud/$ mpicc -o output program.c
vagrant@master-vm/cloud/$ mpirun -np 10 ./output
vagrant@master-vm/cloud/$ mpirun -np 10 -f machinefile  ./output
```
You can also use a MakeFile, the following is an example : 

```makefile
C=mpicc
RUN=mpirun
all: mpicluster-contest run clean

mpicluster-contest :
	$(C) mpi_hello.c -o connection.out 
	
run:
	time ./connection.out 
	time $(RUN) -np 10 ./connection.out 
	time $(RUN) -np 10 -f machinefile ./connection.out 
```
