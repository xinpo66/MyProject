#ifndef HOMETHEATERFACADE_H_
#define HOMETHEATERFACADE_H_

#include <sp.hpp>

#include "Amplifier.h"
#include "CdPlayer.h"
#include "DvdPlayer.h"
#include "PopcornPopper.h"
#include "Projector.h"
#include "Screen.h"
#include "TheaterLights.h"
#include "Tuner.h"

class HomeTheaterFacade
{
public:
	HomeTheaterFacade( SP<Amplifier> Amp,SP<CdPlayer> Cd,SP<DVDPlayer> Dvd
		,SP<PopcornPopper> Popcorn,SP<Projector> P,SP<Screen> S,SP<TheaterLights> Lights
		,SP<Tuner> T):
		_Amp(Amp),
		_Cd(Cd),
		_Dvd(Dvd),
		_Popcorn(Popcorn),
		_Projector(P),
		_Screen(S),
		_Light(Lights),
		_Tuner(T)
	{

	}
	~HomeTheaterFacade(){}

	void watchMovie(std::string movieName)
	{
		printf("Get ready to watch a movie...\n");
		_Popcorn->On();
		_Popcorn->Pop();
		_Light->Dim(10);
		_Screen->Down();
		_Projector->On();
		_Projector->WideScreenMode();
		_Amp->On();
		_Amp->SetDVD(_Dvd);
		_Amp->SetSurroundSound();
		_Amp->SetVolume(5);
		_Dvd->On();
		_Dvd->Play(movieName);
	}

	void endMovie()
	{
		printf("Shutting movie theater down...\n");
		_Popcorn->Off();
		_Light->On();
		_Screen->Up();
		_Projector->Off();
		_Amp->Off();
		_Dvd->Stop();
		_Dvd->eject();
		_Dvd->Off();
	}
protected:
private:
	SP<Amplifier> _Amp;
	SP<CdPlayer> _Cd;
	SP<DVDPlayer> _Dvd;
	SP<PopcornPopper> _Popcorn;
	SP<Projector> _Projector;
	SP<Screen> _Screen;
	SP<TheaterLights> _Light;
	SP<Tuner> _Tuner;
};

#endif //HOMETHEATERFACADE_H_