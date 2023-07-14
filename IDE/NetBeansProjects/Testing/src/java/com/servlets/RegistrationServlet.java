package com.servlets;

import jakarta.servlet.RequestDispatcher;
import jakarta.servlet.ServletException;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.io.PrintWriter;

public class RegistrationServlet extends HttpServlet{
    @Override
    public void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();
        String firstName = request.getParameter("firstName");
        String lastName = request.getParameter("lastName");
        String age = request.getParameter("age");
        
        out.println("<h3>Name: "+firstName+" "+lastName+"</h3>");
        out.println("<h3>Age: "+age+"</h3>");
        
        //RequestDispatcher rd = request.getRequestDispatcher("Servlet url Pattern");
        RequestDispatcher requestDispatcher = request.getRequestDispatcher("SuccessServlet");
        
        //requestDispatcher.include(request, response);        
        requestDispatcher.forward(request, response);
    }
}