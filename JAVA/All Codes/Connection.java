package com.hibernateapp.controller;

	import java.io.IOException;
import java.net.http.HttpRequest;
import java.net.http.HttpResponse;
import java.util.List;
	import javax.servlet.RequestDispatcher;
	import javax.servlet.ServletException;
	import javax.servlet.annotation.WebServlet;
	import javax.servlet.http.HttpServlet;
	import javax.servlet.http.HttpServletRequest;
	import javax.servlet.http.HttpServletResponse;
	import org.hibernate.Session;
	import org.hibernate.SessionFactory;
	import com.hibernateapp.model.Student;
	import com.hibernateapp.util.HibernateUtil;
	/**
	 * Servlet implementation class TestConnection
	 */
	@WebServlet("/connect")
	public class TestConnection extends HttpServlet {
	private static final long serialVersionUID = 1L;

	 /**
	 * @see HttpServlet#HttpServlet()
	 */
	 public TestConnection() {
	 super();
	 // TODO Auto-generated constructor stub
	 }
	 /**
	  * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse
	 response)
	  */

	 protected void doGet(HttpServletRequest request, HttpServletResponse
	 response) throws ServletException, IOException {
	  SessionFactory sf=HibernateUtil.getSessionFactory();
	  try
	  {
	  Session session=sf.getCurrentSession();
	  session.beginTransaction();
	  List<Student> allStudents=session.createQuery("from
	 Student").list();
	  RequestDispatcher
	 reqDispatcher=request.getRequestDispatcher("viewAllStudents.jsp");
	  request.setAttribute("studentList", allStudents);
	  reqDispatcher.include(request, response);
	  }
	  catch(Exception ex)
	  {
	  ex.printStackTrace();
	  }
	  }
	  /**
	  * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse
	 response)
	  */
	 protected void doPost(HttpRequest request, HttpResponse response) throws ServletException, IOException {
	  // TODO Auto-generated method stub
	  doGet(request, response);
	  }
}
