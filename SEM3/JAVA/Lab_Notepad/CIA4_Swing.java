import java.awt.event.*;
import java.awt.Color;
import java.awt.Font;
import javax.swing.*;
import javax.swing.JPasswordField;
class CIA4_Swing extends JFrame implements ActionListener
{
    JTextField t1,t2,t3;
    JLabel l1,l2,l3,l4;
    JCheckBox cb1;
    public void actionPerformed(ActionEvent e)
    {
        if(t1.getText().equals("Mitali") && t2.getText().equals("123456"))
            JOptionPane.showMessageDialog(this,t1.getText()+", Welcome !!");
		else 
		    JOptionPane.showMessageDialog(this,"Invalid Username Or Password");
    }

    public void setting()
    {
        JFrame frame=new JFrame("Login");
        frame.getContentPane().setBackground(new Color(0x9B9B9B));
        JPanel panel=new JPanel();
        panel.setBackground(new Color(0xCDCDCD));
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        panel.setBorder(BorderFactory.createEmptyBorder(100, 100, 100, 100));


        JLabel label = new JLabel("Admin Login");
        label.setFont(new Font("Arial Black", Font.PLAIN, 35));
        label.setHorizontalAlignment(JLabel.LEFT);
        label.setBounds(175,5,200,30);    
        label.setSize(390,100);  
        frame.add(label);

        l1=new JLabel("Username     ");
        t1=new JTextField();
        t1.setHorizontalAlignment(JTextField.LEFT);
        l1.setBounds(100,100,200,30);//left top right down
        t1.setBounds(200,100,200,30);
        frame.add(l1);

        l2=new JLabel("Password     ");
        t2=new JPasswordField();
        t2.setHorizontalAlignment(JPasswordField.LEFT);
        l2.setBounds(100,180,200,30);
        t2.setBounds(200,180,200,30);
        frame.add(l2);

        

        JButton b=new JButton("Login");
        b.setBounds(250,250,75,35);//left top width height
        b.setBackground(new Color(0xDDDADA));
        b.addActionListener(this);

        frame.add(panel);
        frame.add(b);
        frame.add(t1);
        frame.add(t2);
        frame.setSize(600,450);  
        frame.setLayout(null);  
        frame.setVisible(true);  
    }

    public static void main(String args[])
    {
        CIA4_Swing ob=new CIA4_Swing();
        ob.setting();
    }
}