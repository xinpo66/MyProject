
//////////////////////////////////////////////////////////////////////////
//
// 2016/4/19 21:34 Simple Xu
// 外观模式客户端测试
//////////////////////////////////////////////////////////////////////////

#include <SP.hpp>

#include "HomeTheaterFacade.h"

int main(int argc,char* argv[])
{
	SP<Amplifier> Amp(new Amplifier() );
	SP<CdPlayer> Cd( new CdPlayer());
	SP<DVDPlayer> Dvd( new DVDPlayer());
	SP<PopcornPopper> PopCorn( new PopcornPopper());
	SP<Projector> Pro(new Projector());
	SP<Screen> Scr(new Screen());
	SP<TheaterLights> Light(new TheaterLights());
	SP<Tuner> Tun(new Tuner());

	SP<HomeTheaterFacade> Home(new HomeTheaterFacade(Amp,Cd,Dvd,PopCorn,Pro,Scr,Light,Tun));

	Home->watchMovie("The Lord of the Rings.3");
	Home->endMovie();
	return 0;
}