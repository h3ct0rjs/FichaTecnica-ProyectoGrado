# MPI Cluster, Grade Project Universidad Tecnologica de Pereira. 

![h3ct0rjs's MPI](https://github-readme-stats.vercel.app/api/pin/?username=h3ct0rjs&repo=FichaTecnica-ProyectoGrado&show_icons=true&theme=radical&hide=tex)

In order to create and deploy the MPI HPC Cluster and Vagrant Experiments you will need to have the following requirements : 

**Requirements**
- Vagrant  
- Virtualbox 
- Virtual Machine Host Manager with at least 16 GB memory ram and a good processor. 

## Cloning Vagrant Experiments

You'll need to have git cvs in order to download this repository and start deploying the cluster. Follow the next 
steps : 

`user@machine$ git clone https://github.com/h3ct0rjs/FichaTecnica-ProyectoGrado.git`

`user@machine$ cd FichaTecnica-ProyectoGrado/ClusterVagrant`

I have created multiple samples that you can use to understand Vagrant, the following is a list in  order that I recommend you to try : 

* **SingleMPIMachine** : Basic Understanding of how a VagrantFile is, you should run this as a first try after installing VirtualBox and Vagrant.
* **NetworkingLab**: A VagrantFile to understand and play with multiple networking options. 
* **MultipleNodes/SimpleMultipleNodes** : A VagrantFile to understand multiple vm provisioning using .each() ruby method
* **MultipleNodes/VarMultipleNodes** : A VagrantFile to understand multiple vm provisioning using a variable using .upto() ruby method
* **ClusterMPICH/Version1** : A first final VagrantFile Cluster to run programs using MPI.
* **ClusterMPICH/Version2** : An improved final VagrantFile Cluster to run programs using MPI.

### **Notes** : 

* __Box__ Folder is strictly neccesary due to the box base image was handle. 