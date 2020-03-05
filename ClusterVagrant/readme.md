# MPI Cluster, Grade Project Universidad Tecnologica de Pereira. 


In order to create and deploy the MPI HPC Cluster you will need to have the following requirements : 

**Requirements**
- Vagrant  
- Virtualbox 
- VM Host with at least 16 GB Memory Ram and a good processor. 

## Cloning Cluster Code

You'll need to have git cvs in order to download this repository and start deploying the cluster. Follow the next 
steps : 

`$git clone https://github.com/h3ct0rjs/FichaTecnica-ProyectoGrado.git`

`$cd FichaTecnica-ProyectoGrado`

`~ FichaTecnica-ProyectoGrado/$ cd FinalClusterBuild `


## Start the Cluster

`~ FichaTecnica-ProyectoGrado/FinalClusterBuild/$ vagrant up  `

## Reinstall Software on Virtual Machines 


`~ FichaTecnica-ProyectoGrado/FinalClusterBuild/$ vagrant up --provision `


## Reset Virtual Machines 

`~ FichaTecnica-ProyectoGrado/FinalClusterBuild/$ vagrant reload`
