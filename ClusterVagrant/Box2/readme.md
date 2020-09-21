# Vagrant Box Image, with MPICH Preinstalled

![h3ct0rjs's MPI](https://github-readme-stats.vercel.app/api/pin/?username=h3ct0rjs&repo=FichaTecnica-ProyectoGrado&show_icons=true&theme=radical&hide=tex)

In order to create and deploy the MPI HPC Cluster and run all the _Vagrant_ Experiments after doing a few tests, I notice that there was a significant 

amount of time consumption doing the compilation and installation process in all the virtual machines, including the **_master-vm_** node and **_slavei-vm_** nodes.
The best approach to fix this problem and reduce time provisioning I created a Vagrant box fully custom with  a few task: 
- Disable Apt Daily and Timers Services, this will allow me to run apt commands when vagrant try to run the inline script. 
- Install MPICH binary
- Update the operative system based on ubuntu18.04 with the latest package 
- Reduce Size of Box. 
- Remove unnecesary Services.

You can run this box writing this on your **VagrantFile** :
```ruby
Vagrant.configure("2") do |config|
  config.vm.box = "c1b3rh4ck/cluster-mpi1804"
  config.vm.box_version = "0.5"
end
```

`user@machine$ vagrant up `

If you want to run the previous version that is based on Ubuntu16.04 :

```ruby
Vagrant.configure("2") do |config|
  config.vm.box = "c1b3rh4ck/mpicluster-base"
  config.vm.box_version = "0.0.1"
end
```
