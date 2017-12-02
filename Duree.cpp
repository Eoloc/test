#include "Duree.h"
 
Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{
  while(m_secondes > 60){
    m_minutes += 1;
    m_secondes -= 60;
  }
  
  while(m_minutes > 60){
    m_heures += 1;
    m_minutes -= 60;
  }
  
}
