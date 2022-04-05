import java.awt.event.*;
import java.awt.Color;
import java.awt.Font;
import javax.swing.*;
class Lab14_Swing extends JFrame implements ActionListener
{
    JTextField t1,t2,t3;
    JLabel l1,l2,l3,l4;
    JCheckBox cb1;
    public void actionPerformed(ActionEvent e)
    {
        if(cb1.isSelected())
        {
            JOptionPane.showMessageDialog(this,t1.getText()+", You Have Successfully Registered!!");
        }
        else
        {
            JOptionPane.showMessageDialog(this,"Please Select the 'Agree with our Terms and Conditions'");
        }
    }

    public void setting()
    {
        JFrame frame=new JFrame("Registration Form");
        frame.getContentPane().setBackground(new Color(0x9B9B9B));
        JPanel panel=new JPanel();
        //panel.setBackground(new Color(0x84c2db));
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        panel.setBorder(BorderFactory.createEmptyBorder(10, 10, 10, 10));

        JLabel label = new JLabel("Registration Form");
        label.setFont(new Font("Bell MT", Font.PLAIN, 30));
        label.setHorizontalAlignment(JLabel.CENTER);    
        label.setSize(390,100);  
        frame.add(label);

        l1=new JLabel("Name ");
        t1=new JTextField();
        t1.setHorizontalAlignment(JTextField.LEFT);
        l1.setBounds(60,100,200,30);//left top right down
        t1.setBounds(120,100,200,30);
        frame.add(l1);

        l2=new JLabel("Reg No. ");
        t2=new JTextField();
        t2.setHorizontalAlignment(JTextField.LEFT);
        l2.setBounds(60,150,200,30);
        t2.setBounds(120,150,100,30);
        frame.add(l2);

        l3=new JLabel("Email ID ");
        t3=new JTextField();
        t3.setHorizontalAlignment(JTextField.LEFT);
        l3.setBounds(60,200,200,30);
        t3.setBounds(120,200,200,30);
        frame.add(l3);

        l4=new JLabel("Gender ");
        l4.setBounds(60,250,200,30);
        frame.add(l4);
        JRadioButton rb1=new JRadioButton("A) Male");
        JRadioButton rb2=new JRadioButton("B) Female");
        JRadioButton rb3=new JRadioButton("C) Others");
        
        rb1.setBackground(new Color(0x9B9B9B));
        rb2.setBackground(new Color(0x9B9B9B));
        rb3.setBackground(new Color(0x9B9B9B));

        rb1.setBounds(110,250,70,30);
        rb2.setBounds(200,250,100,30);
        rb3.setBounds(300,250,100,30);
        ButtonGroup bg=new ButtonGroup();
        bg.add(rb1); 
        bg.add(rb2); 
        bg.add(rb3);
        frame.add(rb1);
        frame.add(rb2);
        frame.add(rb3);

        JButton b=new JButton("SUBMIT");
        b.setBounds(160,350,100,30);
        b.addActionListener(this);

        cb1=new JCheckBox("Agree with our Terms and Conditions");
        cb1.setBackground(new Color(0x9B9B9B));
        cb1.setBounds(100,300,250,30);
        frame.add(cb1);

        frame.add(panel);
        frame.add(b);
        frame.add(t1);
        frame.add(t2);
        frame.add(t3);
        frame.setSize(450,500);  
        frame.setLayout(null);  
        frame.setVisible(true);  
    }

    public static void main(String args[])
    {
        Lab14_Swing ob=new Lab14_Swing();
        ob.setting();
    }
}