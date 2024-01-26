#pragma once

using namespace System;

public ref class Studentas
{
public:
    property String^ Vardas;
    property String^ Pavarde;
    property array<int>^ NamuDarbai;
    property String^ NamuDarbaiStringArray;
    property int Egz;
    property double galutinis;
    property int EgzPazymys;
    property array<int>^ NamuDarbuPazymiai;

    Studentas(String^ vardas, String^ pavarde, array<int>^ namuDarbai, int egz)
    {
        Vardas = vardas;
        Pavarde = pavarde;
        NamuDarbai = namuDarbai;
        Egz = egz;
    }
    int GetEgz() {
        return Egz;
    }
    array<int>^ GetNamuDarbai() {
        return NamuDarbai;
    }
	
	
};
