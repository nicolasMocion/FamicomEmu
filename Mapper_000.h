//
// Created by Nicolas on 18/11/24.
//

#ifndef FAMICOM_MAPPER_000_H
#define FAMICOM_MAPPER_000_H


#include <cstdint>
#include "Mapper.h"



class Mapper_000 : public Mapper
{
public:
    Mapper_000(uint8_t prgBanks, uint8_t chrBanks);
    ~Mapper_000();

public:
    bool cpuMapRead(uint16_t addr, uint32_t &mapped_addr, uint8_t &data) override;
    bool cpuMapWrite(uint16_t addr, uint32_t &mapped_addr, uint8_t data = 0) override;
    bool ppuMapRead(uint16_t addr, uint32_t &mapped_addr) override;
    bool ppuMapWrite(uint16_t addr, uint32_t &mapped_addr) override;
    void reset() override;

    // No local equipment required
};

#endif //FAMICOM_MAPPER_000_H
