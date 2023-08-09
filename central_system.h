
#ifndef CARD_HOLDER_H
#define CARD_HOLDER_H

#include <string>

/**
  * class card_holder
  * 
  */

class card_holder
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  card_holder ();

  /**
   * Empty Destructor
   */
  virtual ~card_holder ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void sign_bill_ ()
  {
  }


  /**
   */
  void give_card_ ()
  {
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

  string item_purchased;
  string credit_card;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of item_purchased
   * @param new_var the new value of item_purchased
   */
  void setItem_purchased (string new_var)   {
      item_purchased = new_var;
  }

  /**
   * Get the value of item_purchased
   * @return the value of item_purchased
   */
  string getItem_purchased ()   {
    return item_purchased;
  }

  /**
   * Set the value of credit_card
   * @param new_var the new value of credit_card
   */
  void setCredit_card (string new_var)   {
      credit_card = new_var;
  }

  /**
   * Get the value of credit_card
   * @return the value of credit_card
   */
  string getCredit_card ()   {
    return credit_card;
  }
private:


  void initAttributes () ;

};

#endif // CARD_HOLDER_H


#ifndef CENTRAL_SYSTEM_H
#define CENTRAL_SYSTEM_H

#include <string>

/**
  * class central_system
  * 
  */

class central_system
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  central_system ();

  /**
   * Empty Destructor
   */
  virtual ~central_system ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @return string
   */
  string print_bill_ ()
  {
  }


  /**
   * @return string
   */
  string validate_card_ ()
  {
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

  string product_name;
  void product_details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of product_name
   * @param new_var the new value of product_name
   */
  void setProduct_name (string new_var)   {
      product_name = new_var;
  }

  /**
   * Get the value of product_name
   * @return the value of product_name
   */
  string getProduct_name ()   {
    return product_name;
  }

  /**
   * Set the value of product_details
   * @param new_var the new value of product_details
   */
  void setProduct_details (void new_var)   {
      product_details = new_var;
  }

  /**
   * Get the value of product_details
   * @return the value of product_details
   */
  void getProduct_details ()   {
    return product_details;
  }
private:


  void initAttributes () ;

};

#endif // CENTRAL_SYSTEM_H
