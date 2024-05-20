#include "Asteroide.h"

///////////////////////////////////////////////////////////////////////////
Asteroide::Asteroide(int x, int y)
{
  m_x = x;
  m_y = y;
}

///////////////////////////////////////////////////////////////////////////
void Asteroide::update()
{
  m_y = m_y + 0.4f;

  if (m_y >= 39)
  {
    m_x = rand() % 119 + 1;
    m_y = 1;
  }
}

///////////////////////////////////////////////////////////////////////////
void Asteroide::draw()
{
  mvaddch(m_y, m_x, '*');
}

// Implementamos la colisión, evaluamos si el asteroide está dentro del
// bounding box (rectángulo) que contiene a la nave.
///////////////////////////////////////////////////////////////////////////
void Asteroide::colision( Nave &rNave )
{
  // Verificamos la colisión. 
  // Si se cumplen estas condiciones quiere decir que el asteroide entró
  // en contacto con el bounding box de la nave (COLISION).
  if( m_x >= rNave.getX() && m_x <= rNave.getX() + 4 && m_y >= rNave.getY() && m_y <= rNave.getY() + 2 )
  {
    // Si hay colisión disminuimos la energía de la nave.
    rNave.setEnergia(rNave.getEnergia() - 1);

    // Volvemos a colocar el asteroide arriba de todo.
    m_x = rand() % 119 + 1;
    m_y = 1;
  }
}
