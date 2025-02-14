#include <iostream>
#include "Museum.h"
#include "Section.h"
#include "Exhibit.h"

int main() {
    Museum museum("Virtual Knowledge Museum");

    // === Section 1: Ancient Wonders ===
    Section ancientWonders("Ancient Wonders",
        "This section showcases some of the most fascinating and enduring wonders of the ancient world, "
        "including their construction, purpose, and historical significance.");
    
    ancientWonders.addExhibit(Exhibit("Great Pyramid of Giza",
        "The Great Pyramid, built during the Fourth Dynasty of the Old Kingdom, is the only surviving wonder "
        "of the Seven Wonders of the Ancient World. Constructed using over 2.3 million limestone blocks, "
        "it stood as the tallest man-made structure for over 3,800 years.",
        "Ancient Egypt", "Monument", -2560, "Giza, Egypt"));
    
    ancientWonders.addExhibit(Exhibit("Hanging Gardens of Babylon",
        "Although its existence remains debated, the Hanging Gardens were described as a marvel of "
        "engineering, featuring terraced gardens irrigated by an advanced water system. The gardens "
        "were allegedly built by King Nebuchadnezzar II for his wife, Amytis, who longed for the green landscapes of her homeland.",
        "Babylonian Empire", "Legendary Garden", -600, "Babylon, Mesopotamia (modern Iraq)"));
    
    ancientWonders.addExhibit(Exhibit("Statue of Zeus at Olympia",
        "Created by the renowned sculptor Phidias, the Statue of Zeus was a grand, gold and ivory-covered sculpture, "
        "standing over 12 meters tall. It depicted the Greek god Zeus seated on an elaborate throne, holding a statue of Nike, the goddess of victory.",
        "Ancient Greece", "Statue", -435, "Olympia, Greece"));
    
    ancientWonders.addExhibit(Exhibit("Lighthouse of Alexandria",
        "A technological marvel of its time, the Lighthouse of Alexandria stood approximately 100 meters tall "
        "and used a system of mirrors to project a beacon of light visible for miles. It guided sailors safely "
        "into the harbor of Alexandria, one of the most important trade centers of the ancient world.",
        "Ancient Egypt", "Navigation Tower", -280, "Alexandria, Egypt"));

    museum.addSection(ancientWonders);

    // === Section 2: Space Exploration ===
    Section spaceExploration("Space Exploration",
        "This section is dedicated to humanity’s greatest achievements in exploring the cosmos, "
        "from the first satellites to interstellar probes pushing the boundaries of the known universe.");

    spaceExploration.addExhibit(Exhibit("Sputnik 1",
        "Launched by the Soviet Union on October 4, 1957, Sputnik 1 was the first artificial satellite to orbit the Earth. "
        "Its successful deployment marked the beginning of the space age and intensified the space race between the US and USSR.",
        "Soviet Space Program", "Satellite", 1957, "Low Earth Orbit"));
    
    spaceExploration.addExhibit(Exhibit("Apollo 11 Mission",
        "Apollo 11 was the first manned mission to successfully land on the Moon. On July 20, 1969, astronauts Neil Armstrong "
        "and Buzz Aldrin took humanity’s first steps on the lunar surface, while Michael Collins piloted the command module.",
        "NASA", "Lunar Mission", 1969, "Moon"));
    
    spaceExploration.addExhibit(Exhibit("Hubble Space Telescope",
        "Deployed in 1990, the Hubble Space Telescope has provided some of the most detailed images of distant galaxies, "
        "nebulae, and black holes. It has fundamentally changed our understanding of the universe’s age, expansion, and composition.",
        "NASA & ESA", "Telescope", 1990, "Low Earth Orbit"));
    
    spaceExploration.addExhibit(Exhibit("Mars Rover Perseverance",
        "Perseverance, launched in 2020, is a state-of-the-art robotic rover designed to explore the Martian surface, "
        "searching for signs of past life and collecting soil samples for future return missions to Earth.",
        "NASA", "Rover", 2021, "Mars"));

    museum.addSection(spaceExploration);

    // === Section 3: Scientific Breakthroughs ===
    Section scienceBreakthroughs("Scientific Breakthroughs",
        "This section highlights key discoveries and inventions that revolutionized our understanding of science and technology.");

    scienceBreakthroughs.addExhibit(Exhibit("Theory of Relativity",
        "Proposed by Albert Einstein in the early 20th century, the Theory of Relativity transformed physics. "
        "It introduced groundbreaking concepts like time dilation, the speed of light as a constant, and the relationship between space and time.",
        "Physics", "Scientific Theory", 1905, "Global"));
    
    scienceBreakthroughs.addExhibit(Exhibit("Discovery of Penicillin",
        "Alexander Fleming’s discovery of penicillin in 1928 revolutionized medicine. This antibiotic, derived from mold, "
        "became the first widely-used treatment for bacterial infections, saving millions of lives worldwide.",
        "Medical Science", "Medicine", 1928, "Global"));
    
    scienceBreakthroughs.addExhibit(Exhibit("DNA Double Helix",
        "In 1953, James Watson and Francis Crick uncovered the structure of DNA, revealing the double helix formation. "
        "This discovery was crucial to understanding genetic inheritance and advancing modern genetics and biotechnology.",
        "Biology", "Genetic Structure", 1953, "Cambridge, UK"));
    
    scienceBreakthroughs.addExhibit(Exhibit("Human Genome Project",
        "Completed in 2003, the Human Genome Project mapped all the genes in human DNA, paving the way for personalized medicine, "
        "gene therapy, and deeper insights into human evolution.",
        "Genetics", "Genomics Research", 2003, "International Collaboration"));

    museum.addSection(scienceBreakthroughs);

    // === Section 4: Computing Revolution ===
    Section computingRevolution("Computing Revolution",
        "This section explores the evolution of computers and digital technology, from early machines to modern artificial intelligence.");

    computingRevolution.addExhibit(Exhibit("ENIAC - First Digital Computer",
        "The ENIAC, developed in the 1940s, was one of the first general-purpose electronic computers. "
        "It occupied an entire room and performed complex calculations faster than ever before, marking the beginning of modern computing.",
        "Computing", "Computer", 1945, "University of Pennsylvania"));
    
    computingRevolution.addExhibit(Exhibit("Birth of the Internet",
        "The ARPANET, developed in the late 1960s, was the foundation for the modern internet. It introduced packet-switching "
        "technology and connected computers across long distances, enabling global communication.",
        "Networking", "Technology", 1969, "Global"));
    
    computingRevolution.addExhibit(Exhibit("Rise of Artificial Intelligence",
        "Artificial Intelligence (AI) has progressed from early rule-based systems to advanced deep learning networks, "
        "powering applications such as self-driving cars, language translation, and medical diagnostics.",
        "Computer Science", "AI Technology", 2010, "Global"));
    
    computingRevolution.addExhibit(Exhibit("Quantum Computing",
        "Quantum computers leverage the principles of quantum mechanics to process information in ways classical computers cannot. "
        "With ongoing advancements, they promise breakthroughs in cryptography, optimization, and scientific simulations.",
        "Quantum Computing", "Supercomputer", 2020, "Various Research Labs"));

    museum.addSection(computingRevolution);

    // === Display the Museum ===
    museum.display();

    return 0;
}

