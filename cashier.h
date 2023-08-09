
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


#ifndef CASHIER_H
#define CASHIER_H

#include <string>

/**
  * class cashier
  * 
  */

class cashier
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  cashier ();

  /**
   * Empty Destructor
   */
  virtual ~cashier ();

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
  void enter_amount ()
  {
  }


  /**
   */
  void swipe_card_ ()
  {
  }


  /**
   */
  void print_bill_ ()
  {
  }


  /**
   */
  void deliver_product_ ()
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
  string cost_of_product;
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
   * Set the value of cost_of_product
   * @param new_var the new value of cost_of_product
   */
  void setCost_of_product (string new_var)   {
      cost_of_product = new_var;
  }

  /**
   * Get the value of cost_of_product
   * @return the value of cost_of_product
   */
  string getCost_of_product ()   {
    return cost_of_product;
  }
private:


  void initAttributes () ;

};

#endif // CASHIER_H
