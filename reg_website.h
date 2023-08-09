
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
