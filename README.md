# Flexible_Address_Assignment_Protocol

## Brief Introduction📘
In the current network architecture, the limitation of address length, the over centralized design of networking and the high overhead of routing protocol itself hinder the construction of super large-scale WSN. Guided by the traditional IP, the distributed elastic address allocation and routing method is adopted to dynamically build the network. At the same time, it not only breaks the limitations of IP address, but also eliminates some routing overhead, so that the communication system pays more attention to the transmission of actual communication content. In addition, compared with the traditional network, WSN has the characteristics of large scale, dynamic, limited energy and complex environment. A reasonable time synchronization protocol and the corresponding reasonable sleep wake-up mechanism will reduce the energy consumption during synchronization and effectively increase the working life of the whole equipment.


## Developer Information and Tools 👩‍💻

For detailed information on how to initialize and install. Please read the following.

### 1. Download and Install development environment 👷‍♂️

- You'll need to install the InstantContiki 2.7. Please download it on the official website.

**Download url**：[InstantContiki 2.7](http://sourceforge.net/projects/contiki/)

![Download instantcontiki](https://img-blog.csdnimg.cn/20201025193904595.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM5NDM0NjEx,size_16,color_FFFFFF,t_70#pic_center)

---
- You also need to install the VMware. Please download it on the official website.
Enter the official website of VMware virtual machine: https://www.vmware.com/cn.html

- After ensuring that VMware is installed on your computer, open the folder and double-click the **Instant_Contiki_Ubuntu_12.04_32-bit.vmx** ，This will jump to VMware and automatically create a virtual machine.

![something](https://img-blog.csdnimg.cn/20201025195359980.png#pic_center)

- Then click to start the virtual machine and wait until the startup interface is displayed.
- !!! Attention !!!: the **defult password** is **user** . 
![open](https://img-blog.csdnimg.cn/20201025195210615.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM5NDM0NjEx,size_16,color_FFFFFF,t_70#pic_center)

****
### 2. Test tools of Cooja 🧐
>Cooja is a more powerful simulation tool provided by Contiki, which simulates the complete sensor network nodes (such as sky and ESB) as much as possible.

1. Start cooja from the command line (now there is a cooja icon on the desktop in 2.7, or you can directly double-click to enter)
 
**Type the following two instructions on the command line.**
```
cd contiki/tools/cooja/
ant run
```
 2. You need to wait for your own compilation for the first time. After that, a box with a blue background will pop up and start successfully.
![image](https://user-images.githubusercontent.com/33835105/147207468-34ca995d-5895-46a3-a3f3-61c66b67c388.png)

![test2](https://img-blog.csdnimg.cn/20201025200329571.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM5NDM0NjEx,size_16,color_FFFFFF,t_70#pic_center)

****

### 3. Run tests 🦾

**1. Click in the order shown below File->New simulation to create a new simulation as default.**
![image](https://user-images.githubusercontent.com/33835105/147207178-75159b3f-f915-410b-9d48-c286b663fb55.png)

****

**2. Click in the order shown below Motes->Add motes->create new mote type-> Sky motes to create a new node type. we select path as   ./examples/ipv6/rpl-collect/udp-sink.c  for sink-node，after compile and create.The results shown in the figure below will appear：**

![image](https://user-images.githubusercontent.com/33835105/147208199-49ca3890-abb3-454c-ac77-eedf51282ae7.png)

- We just need to create One sink-node.
- We can create the send node in the same way; we select path as   ./examples/ipv6/rpl-collect/udp-sender.c  for sender-node.
![image](https://user-images.githubusercontent.com/33835105/147208544-1dd41f49-c67f-4b88-94fc-a98c42f190be.png)

****

**3. Click start to simulate and we can use Tools/Collect View/Sky 1 to watch the logic-link of network.**
![image](https://user-images.githubusercontent.com/33835105/147208781-cbddafc7-568c-48c9-9e14-76d15a22fd06.png)
![image](https://user-images.githubusercontent.com/33835105/147209065-52262b71-11f2-4fd0-84e7-8c75916ddbbd.png)


****

**4. In the view in the network window, you can select different visualization effects to show more details**

![aa](https://img-blog.csdnimg.cn/20201025201749103.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM5NDM0NjEx,size_16,color_FFFFFF,t_70#pic_center)
![bb](https://img-blog.csdnimg.cn/20201025201801724.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM5NDM0NjEx,size_16,color_FFFFFF,t_70#pic_center)

