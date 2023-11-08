import pygame
import sys

pygame.init()

pygame.display.set_caption("SHOOT_GAME")
surface = pygame.display.set_mode((1000, 600))
FPS = pygame.time.Clock()
Big_font = pygame.font.SysFont(None, 80)
small_font = pygame.font.SysFont(None, 40)


def Game_border():
    Start = ((100, 150), (100, 150), (100, 550), (900, 150))
    End = ((100, 550), (900, 150), (900, 550), (900, 550))
    for index in range(len(Start)):
        pygame.draw.line(surface, (255, 255, 255), Start[index], End[index])


Score = 0
Miss_point = 0
m_main = Big_font.render("SHOOTING GAME", True, (255, 255, 255))
m_sub = small_font.render(
    "Missile_Button : A , Missile is only one ", True, (255, 255, 255)
)
m_score = small_font.render("Score: {}".format(Score), True, (255, 255, 255))
m_miss = small_font.render("Miss point: {}".format(Miss_point), True, (255, 255, 255))

while True:
    surface.fill((0, 0, 0))
    FPS.tick(30)
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()
    surface.blit(m_main, (350, 20))
    surface.blit(m_sub, (280, 100))
    surface.blit(m_score, (770, 160))
    surface.blit(m_miss, (700, 200))

    Game_border()
    pygame.display.update()
