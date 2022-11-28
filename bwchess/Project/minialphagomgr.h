#ifndef MINIALPHAGOMGR_H
#define MINIALPHAGOMGR_H

#include "returncode.h"
#include "MiniAlphaGoUi.h"
#include "MiniAlphaGoMgr.h"
#include "searchmgr.h"
#include "calmachine.h"
#include <vector>
#include <QMessageBox>

class MiniAlphaGoMgr
{
public:
    static MiniAlphaGoMgr &getInstance()
    {
        static MiniAlphaGoMgr _instance;
        return _instance;
    }

    ~MiniAlphaGoMgr();

    int32_t init();

    int32_t playChess(int8_t player, int32_t x, int32_t y);

    void initSingleTime();

    int32_t updateBoard(int8_t player);

    void restart(int result);

    int8_t m_board[NS_CALMACHINE::BOARD_SIZE][NS_CALMACHINE::BOARD_SIZE];

    //int32_t acount();

private:
    MiniAlphaGoMgr();

    //int32_t updateBoard(int8_t player);

private:
    //int8_t m_board[NS_CALMACHINE::BOARD_SIZE][NS_CALMACHINE::BOARD_SIZE];

    time_t m_single_start_time;
};

#endif // MINIALPHAGOMGR_H
