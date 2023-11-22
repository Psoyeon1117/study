import pygame
import random

pygame.init()

WHITE = (255,255,255)
size = [400,400]
screen = pygame.display.set_mode(size)

clock = pygame.time.Clock()
done = True

def runGame():
    global done
    rect1=pygame.Rect.Rect(0,0,30,30)
    rect2=pygame.Rect.Rect(100,100,30,30)
    rect2_Rect = rect2.get_rect()
    dx=0 ; dy=0
    while done:
        clock.tick(30)
        screen.fill(WHITE)

        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                done = False
            elif event.type == pygame.KEYDOWN:
                if event.key == pygame.K_LEFT:
                    dx -=10
                elif event.key == pygame.K_RIGHT:
                    dx += 10
                elif event.key == pygame.K_DOWN:
                    dy += 10
                elif event.key == pygame.K_RIGHT:
                    dx -= 10
        screen.blit(rect2, rect2_Rect)
                
