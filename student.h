
#ifndef REG_WEBSITE_H
#define REG_WEBSITE_H

#include <string>

/**
  * class reg_website
  * 
  */

class reg_website
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  reg_website ();

  /**
   * Empty Destructor
   */
  virtual ~reg_website ();

  // Static Public attributes
  //  

  // Public attributes
  //  

  string qualification;
  string login_details;
  string fee_details;
  string exam_details;

  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


  /**
   * Set the value of qualification
   * @param new_var the new value of qualification
   */
  void setQualification (string new_var)   {
      qualification = new_var;
  }

  /**
   * Get the value of qualification
   * @return the value of qualification
   */
  string getQualification ()   {
    return qualification;
  }

  /**
   * Set the value of login_details
   * @param new_var the new value of login_details
   */
  void setLogin_details (string new_var)   {
      login_details = new_var;
  }

  /**
   * Get the value of login_details
   * @return the value of login_details
   */
  string getLogin_details ()   {
    return login_details;
  }

  /**
   * Set the value of fee_details
   * @param new_var the new value of fee_details
   */
  void setFee_details (string new_var)   {
      fee_details = new_var;
  }

  /**
   * Get the value of fee_details
   * @return the value of fee_details
   */
  string getFee_details ()   {
    return fee_details;
  }

  /**
   * Set the value of exam_details
   * @param new_var the new value of exam_details
   */
  void setExam_details (string new_var)   {
      exam_details = new_var;
  }

  /**
   * Get the value of exam_details
   * @return the value of exam_details
   */
  string getExam_details ()   {
    return exam_details;
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  

private:



  /**
   * @return string
   */
  string verification ()
  {
  }


  /**
   * @return string
   */
  string processing ()
  {
  }


  /**
   * @return string
   */
  string registration ()
  {
  }

  void initAttributes () ;

};

#endif // REG_WEBSITE_H


#ifndef STUDENT_H
#define STUDENT_H

#include <string>

/**
  * class student
  * 
  */

class student
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  student ();

  /**
   * Empty Destructor
   */
  virtual ~student ();

  // Static Public attributes
  //  

  // Public attributes
  //  

  string name;
  string address;
  string dob;
  string subjects;
  string college;

  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (string new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  string getName ()   {
    return name;
  }

  /**
   * Set the value of address
   * @param new_var the new value of address
   */
  void setAddress (string new_var)   {
      address = new_var;
  }

  /**
   * Get the value of address
   * @return the value of address
   */
  string getAddress ()   {
    return address;
  }

  /**
   * Set the value of dob
   * @param new_var the new value of dob
   */
  void setDob (string new_var)   {
      dob = new_var;
  }

  /**
   * Get the value of dob
   * @return the value of dob
   */
  string getDob ()   {
    return dob;
  }

  /**
   * Set the value of subjects
   * @param new_var the new value of subjects
   */
  void setSubjects (string new_var)   {
      subjects = new_var;
  }

  /**
   * Get the value of subjects
   * @return the value of subjects
   */
  string getSubjects ()   {
    return subjects;
  }

  /**
   * Set the value of college
   * @param new_var the new value of college
   */
  void setCollege (string new_var)   {
      college = new_var;
  }

  /**
   * Get the value of college
   * @return the value of college
   */
  string getCollege ()   {
    return college;
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  

private:



  /**
   * @return string
   */
  string form_filling ()
  {
  }


  /**
   * @return string
   */
  string registration ()
  {
  }

  void initAttributes () ;

};

#endif // STUDENT_H
