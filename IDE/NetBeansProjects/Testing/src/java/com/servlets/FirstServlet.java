package com.servlets;

import jakarta.servlet.Servlet;
import jakarta.servlet.ServletConfig;
import jakarta.servlet.ServletException;
import jakarta.servlet.ServletRequest;
import jakarta.servlet.ServletResponse;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Date;

public class FirstServlet implements Servlet{
    //Life Cycle method
    ServletConfig config;
    
    @Override
    public void init(ServletConfig sc){
        config = sc;
        System.out.println("creating object....");
    }

    @Override
    public void service(ServletRequest sr, ServletResponse resp) throws ServletException, IOException {
        System.out.println("servicing....");
        
        //set the content type of the response
        resp.setContentType("text/html");
        PrintWriter out = resp.getWriter();
        out.println("<h1>This is my output from servlet method</h1>");
        out.println("<h1>Today date is: "+new Date().toString()+"</h1>");
    }

    @Override
    public void destroy() {
        System.out.println("goining to destroy servlet object....");
    }
    
    
    //non life cycle methods

    @Override
    public ServletConfig getServletConfig() {
        return this.config;
    }

    @Override
    public String getServletInfo() {
        return "this servlet created by Chiranjeev Kashyap";
    }
}
