#pragma once

#include <utility>
#include <string>
#include <iostream>
#include <wx/colour.h>

class SliderData
{
public:
	SliderData() = default;
	SliderData (const std::pair<std::string, int> &redSlider, const std::pair<std::string, int> &greenSlider,
				const std::pair<std::string, int> &blueSlider, const std::pair<std::string, int> &redChannelSlider,
				const std::pair<std::string, int> &greenChannelSlider,
				const std::pair<std::string, int> &blueChannelSlider,
				const std::pair<std::string, bool> &bichromeCheckBox,
				const std::pair<std::string, wxColour> &bichromeColour) : redSlider (redSlider),
																		  greenSlider (greenSlider),
																		  blueSlider (blueSlider),
																		  redChannelSlider (redChannelSlider),
																		  greenChannelSlider (greenChannelSlider),
																		  blueChannelSlider (blueChannelSlider),
																		  bichromeCheckBox (bichromeCheckBox),
																		  bichromeColour (bichromeColour)
	{}


	const std::pair<std::string, int> &getRedSlider () const
	{
		return redSlider;
	}

	const std::pair<std::string, int> &getGreenSlider () const
	{
		return greenSlider;
	}

	const std::pair<std::string, int> &getBlueSlider () const
	{
		return blueSlider;
	}

	const std::pair<std::string, int> &getRedChannelSlider () const
	{
		return redChannelSlider;
	}

	const std::pair<std::string, int> &getGreenChannelSlider () const
	{
		return greenChannelSlider;
	}

	const std::pair<std::string, int> &getBlueChannelSlider () const
	{
		return blueChannelSlider;
	}

	const std::pair<std::string, bool> &getBichromeCheckBox () const
	{
		return bichromeCheckBox;
	}

	const std::pair<std::string, wxColour> &getBichromeColour () const
	{
		return bichromeColour;
	}

	void setRedSlider (const std::pair<std::string, int> &redSlider)
	{
		SliderData::redSlider = redSlider;
	}

	void setGreenSlider (const std::pair<std::string, int> &greenSlider)
	{
		SliderData::greenSlider = greenSlider;
	}

	void setBlueSlider (const std::pair<std::string, int> &blueSlider)
	{
		SliderData::blueSlider = blueSlider;
	}

	void setRedChannelSlider (const std::pair<std::string, int> &redChannelSlider)
	{
		SliderData::redChannelSlider = redChannelSlider;
	}

	void setGreenChannelSlider (const std::pair<std::string, int> &greenChannelSlider)
	{
		SliderData::greenChannelSlider = greenChannelSlider;
	}

	void setBlueChannelSlider (const std::pair<std::string, int> &blueChannelSlider)
	{
		SliderData::blueChannelSlider = blueChannelSlider;
	}

	void setBichromeCheckBox (const std::pair<std::string, bool> &bichromeCheckBox)
	{
		SliderData::bichromeCheckBox = bichromeCheckBox;
	}

	void setBichromeColour (const std::pair<std::string, wxColour> &bichromeColour)
	{
		SliderData::bichromeColour = bichromeColour;
	}


	friend std::ostream &operator<< (std::ostream &, const SliderData &);
//	friend std::istream &operator>> (std::istream &, const SliderData &);
private:
	std::pair<std::string, int> redSlider;
	std::pair<std::string, int> greenSlider;
	std::pair<std::string, int> blueSlider;
	std::pair<std::string, int> redChannelSlider;
	std::pair<std::string, int> greenChannelSlider;
	std::pair<std::string, int> blueChannelSlider;
	std::pair<std::string, bool> bichromeCheckBox;
	std::pair<std::string, wxColour> bichromeColour;

};

inline std::ostream &operator<< (std::ostream &out, const SliderData &data)
{
	return out << data.redSlider.first << " " << data.redSlider.second << "\n"
			   << data.greenSlider.first << " " << data.greenSlider.second << "\n"
			   << data.blueSlider.first << " " << data.blueSlider.second << "\n"
			   << data.redChannelSlider.first << " " << data.redChannelSlider.second << "\n"
			   << data.greenChannelSlider.first << " " << data.greenChannelSlider.second << "\n"
			   << data.blueChannelSlider.first << " " << data.blueChannelSlider.second << "\n"
			   << data.bichromeCheckBox.first << " " << data.bichromeCheckBox.second << "\n"
			   << data.bichromeColour.first << " "
			   << static_cast<int> (data.bichromeColour.second.Red ())
			   << " " << static_cast<int> (data.bichromeColour.second.Green ())
			   << " " << static_cast<int> (data.bichromeColour.second.Blue ()) << "\n";
}

//inline std::istream &operator>> (std::istream &in, const SliderData &data)
//{
//	return in >> data.redSlider.first >> "\n" >> data.redSlider.second >> "\n"
//			   >> data.greenSlider.first >> "\n" >> data.greenSlider.second >> "\n"
//			   >> data.blueSlider.first >> "\n" >> data.blueSlider.second >> "\n"
//			   >> data.redChannelSlider.first >> "\n" >> data.redChannelSlider.second >> "\n"
//			   >> data.greenChannelSlider.first >> "\n" >> data.greenChannelSlider.second >> "\n"
//			   >> data.blueChannelSlider.first >> "\n" >> data.blueChannelSlider.second >> "\n"
//			   >> data.bichromeCheckBox.first >> "\n" >> data.bichromeCheckBox.second >> "\n"
//			   >> data.bichromeColour.first >> "\n"
//			   >> static_cast<int> (data.bichromeColour.second.Red ())
//			   >> "\n" >> static_cast<int> (data.bichromeColour.second.Green ())
//			   >> "\n" >> static_cast<int> (data.bichromeColour.second.Blue ()) >> "\n";
//}



