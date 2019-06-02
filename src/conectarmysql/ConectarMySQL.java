///* Con esta clase nos conectamos a la BD
package conectarmysql;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class ConectarMySQL {
    private static Connection conn;
    private static final String driver ="com.mysql.jdbc.Driver";
    private static final String user ="usuario1";
    private static final String password= "Pa$$w0rd123";
    private static final String url= "jdbc:mysql://localhost:3380/alumnos";

    public ConectarMySQL()  {
        conn=null;
        try {
            Class.forName(driver);
            conn=DriverManager.getConnection(url, user, password);
            if (conn!=null){
                System.out.println("CONEXION ESTABLECIDA");
            }   
        }
        catch (ClassNotFoundException | SQLException e) {
            System.out.println("ERROR AL CONECTAR" + e); 
    }
    }
    ///**ESTE METODO NOS RETORNA LA CONEXION
    
    public Connection getConnection(){
        return conn;
    }
    
    /////*CON ESTE METODO NOS DESCONECTAMOS DE LA BD
    
    public void desconectar(){
        conn=null;
        if (conn==null){
            System.out.println("CONEXION TERMINADA");
        }
    }   

}

