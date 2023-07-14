package com.servlets;

import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.io.PrintWriter;

public class ThirdServlet extends HttpServlet{
    @Override
    public void doGet(HttpServletRequest request, HttpServletResponse response) throws IOException {
        System.out.println("This is foGet() method...."); 
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();
        out.println("<h3>This is doGet() method of Third Servlet</h3>");
    }
}
