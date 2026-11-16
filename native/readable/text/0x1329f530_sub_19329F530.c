// sub_1329F530
// rva 0x1329f530  size 432  section .text  group text
// window base 0x19329f530: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1329F530(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int64 a6)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // edi
  int v11; // esi
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rdi
  BOOL v15; // eax
  __int128 *v16; // rcx
  __int128 v18; // [rsp+0h] [rbp-50h] BYREF
  __int128 v19; // [rsp+10h] [rbp-40h]
  __int128 v20; // [rsp+20h] [rbp-30h]
  __int128 v21; // [rsp+30h] [rbp-20h]
  __int64 v22; // [rsp+40h] [rbp-10h]
  _BYTE v23[4]; // [rsp+50h] [rbp+0h] BYREF
  __int64 v24; // [rsp+54h] [rbp+4h]
  __int64 v25; // [rsp+60h] [rbp+10h]
  __int64 v26; // [rsp+2F0h] [rbp+2A0h]

  v6 = a4;
  if ( MEMORY[0x336740]/* 0x336740 */ == -1 )
  {
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    sub_1932CA161(a1: a4, a2, a3: 0, a4: v23, a5: 668);
    sub_1329F840(a1: v8, a2: v9, a3: v7, a4: v23);
    sub_1329FAA0(a1: v10, a2: v11, a3: (unsigned int)v23, a4: (unsigned int)&v18, a5: v12, a6: v13);
    a5 = v25;
    if ( (_DWORD)v24 == 1970169159 )
    {
      a3 = ((unsigned int)v25 >> 8) & 0xF;
      a6 = (unsigned __int64)(v25 & 0xF0 | ((unsigned int)v25 >> 8) & 0xF00) >> 4;
      if ( (_DWORD)a3 + (unsigned __int8)((unsigned int)v25 >> 20) == 6 && ((_DWORD)a6 == 87 || (_DWORD)a6 == 133) )
      {
        WORD2(v20) = 0;
        LOWORD(v20) = 0;
        BYTE12(v19) = 0;
        *(_WORD *)((char *)&v20 + 7) = 0;
        BYTE6(v20) = 0;
        *(_DWORD *)((char *)&v20 + 10) = 0;
        *(_WORD *)((char *)&v21 + 3) = 0;
        BYTE10(v21) = 0;
      }
    }
    v15 = false;
    if ( BYTE12(v19) != 0
      && ((_DWORD)v24 != 1752462657
       || (_DWORD)(a5 = ((unsigned int)v25 >> 8) & 0xF) + (unsigned __int8)((unsigned int)v25 >> 20) != 25) )
    {
      v15 = true;
    }
    MEMORY[0x3370b0]/* 0x3370b0 */ = v15;
    v16 = &v18;
    v6 = v14 - (_QWORD)&v18;
    while ( (*(_QWORD *)((char *)v16 + v6) | *(_QWORD *)v16) == -1 )
    {
      v16 = (__int128 *)((char *)v16 + 8);
      if ( (unsigned __int64)((char *)v16 - (char *)&v18) >= 0x48 )
      {
        MEMORY[0x336740]/* 0x336740 */ = 0;
        return sub_132C8DE0(a1: v6, a2, a3, a4: (unsigned __int64)v23 ^ v26, a5, a6);
      }
    }
    MEMORY[0x336740]/* 0x336740 */ = 1;
  }
  return sub_132C8DE0(a1: v6, a2, a3, a4: (unsigned __int64)v23 ^ v26, a5, a6);
}
