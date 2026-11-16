// sub_1593B80
// rva 0x01593b80  size 1637  section .text  group text
// window base 0x181593b80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1593B80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, char *a6)
{
  __int64 result; // rax
  __int64 v7; // rsi
  _BOOL8 v8; // rdi
  __int64 v9; // rsi
  int i; // r12d
  __int64 v11; // r10
  unsigned int v12; // r8d
  char *v13; // r12
  char v14; // dl
  __int64 v15; // rax
  _BYTE *v16; // [rsp+8h] [rbp-50h]
  _BYTE *v17; // [rsp+10h] [rbp-48h]
  __int64 v18; // [rsp+10h] [rbp-48h]
  __int64 v19; // [rsp+18h] [rbp-40h]
  int v20; // [rsp+30h] [rbp-28h]

  result = (unsigned int)*a6;
  if ( (_DWORD)result == 43 || (_DWORD)result == 45 )
  {
    v7 = MEMORY[0x120022a8]/* 0x120022a8 */;
    v8 = (_DWORD)result == 43;
    if ( MEMORY[0x120020e0]/* 0x120020e0 */ == 1 )
    {
      v20 = *a6;
      v17 = a6 + 1;
      if ( sub_1593480(
             a1: v8,
             a2: MEMORY[0x120022a8]/* 0x120022a8 */,
             a3: a6 + 1,
             a4: 302000160,
             a5: (_BYTE *)(MEMORY[0x120022a8]/* 0x120022a8 */ + 302000160LL)) )
      {
        v15 = 0;
        goto LABEL_36;
      }
    }
    else
    {
      v17 = a6 + 1;
      v20 = *a6;
    }
    if ( MEMORY[0x120020e1]/* 0x120020e1 */ == 1
      && sub_1593480(
           a1: v8,
           a2: v7,
           a3: v17,
           a4: MEMORY[0x120022ac]/* 0x120022ac */ + 302000160LL,
           a5: (_BYTE *)(MEMORY[0x120022ac]/* 0x120022ac */ + 302000160LL)) )
    {
      v15 = 1;
    }
    else if ( MEMORY[0x120020e2]/* 0x120020e2 */ == 1
           && sub_1593480(
                a1: v8,
                a2: v7,
                a3: v17,
                a4: MEMORY[0x120022b0]/* 0x120022b0 */ + 302000160LL,
                a5: (_BYTE *)(MEMORY[0x120022b0]/* 0x120022b0 */ + 302000160LL)) )
    {
      v15 = 2;
    }
    else if ( MEMORY[0x120020e3]/* 0x120020e3 */ == 1
           && sub_1593480(
                a1: v8,
                a2: v7,
                a3: v17,
                a4: MEMORY[0x120022b4]/* 0x120022b4 */ + 302000160LL,
                a5: (_BYTE *)(MEMORY[0x120022b4]/* 0x120022b4 */ + 302000160LL)) )
    {
      v15 = 3;
    }
    else if ( MEMORY[0x120020e4]/* 0x120020e4 */ == 1
           && sub_1593480(
                a1: v8,
                a2: v7,
                a3: v17,
                a4: MEMORY[0x120022b8]/* 0x120022b8 */ + 302000160LL,
                a5: (_BYTE *)(MEMORY[0x120022b8]/* 0x120022b8 */ + 302000160LL)) )
    {
      v15 = 4;
    }
    else if ( MEMORY[0x120020e5]/* 0x120020e5 */ == 1
           && sub_1593480(
                a1: v8,
                a2: v7,
                a3: v17,
                a4: MEMORY[0x120022bc]/* 0x120022bc */ + 302000160LL,
                a5: (_BYTE *)(MEMORY[0x120022bc]/* 0x120022bc */ + 302000160LL)) )
    {
      v15 = 5;
    }
    else if ( MEMORY[0x120020e6]/* 0x120020e6 */ == 1
           && sub_1593480(
                a1: v8,
                a2: v7,
                a3: v17,
                a4: MEMORY[0x120022c0]/* 0x120022c0 */ + 302000160LL,
                a5: (_BYTE *)(MEMORY[0x120022c0]/* 0x120022c0 */ + 302000160LL)) )
    {
      v15 = 6;
    }
    else if ( MEMORY[0x120020e7]/* 0x120020e7 */ == 1
           && sub_1593480(
                a1: v8,
                a2: v7,
                a3: v17,
                a4: MEMORY[0x120022c4]/* 0x120022c4 */ + 302000160LL,
                a5: (_BYTE *)(MEMORY[0x120022c4]/* 0x120022c4 */ + 302000160LL)) )
    {
      v15 = 7;
    }
    else if ( MEMORY[0x120020e8]/* 0x120020e8 */ == 1
           && sub_1593480(
                a1: v8,
                a2: v7,
                a3: v17,
                a4: MEMORY[0x120022c8]/* 0x120022c8 */ + 302000160LL,
                a5: (_BYTE *)(MEMORY[0x120022c8]/* 0x120022c8 */ + 302000160LL)) )
    {
      v15 = 8;
    }
    else if ( MEMORY[0x120020e9]/* 0x120020e9 */ == 1
           && sub_1593480(
                a1: v8,
                a2: v7,
                a3: v17,
                a4: MEMORY[0x120022cc]/* 0x120022cc */ + 302000160LL,
                a5: (_BYTE *)(MEMORY[0x120022cc]/* 0x120022cc */ + 302000160LL)) )
    {
      v15 = 9;
    }
    else if ( MEMORY[0x120020ea]/* 0x120020ea */ == 1
           && sub_1593480(
                a1: v8,
                a2: v7,
                a3: v17,
                a4: MEMORY[0x120022d0]/* 0x120022d0 */,
                a5: (_BYTE *)(MEMORY[0x120022d0]/* 0x120022d0 */ + 302000160LL)) )
    {
      v15 = 10;
    }
    else if ( MEMORY[0x120020eb]/* 0x120020eb */ == 1
           && sub_1593480(
                a1: v8,
                a2: v7,
                a3: v17,
                a4: MEMORY[0x120022d4]/* 0x120022d4 */ + 302000160LL,
                a5: (_BYTE *)(MEMORY[0x120022d4]/* 0x120022d4 */ + 302000160LL)) )
    {
      v15 = 11;
    }
    else
    {
      result = MEMORY[0x120022d8]/* 0x120022d8 */;
      if ( MEMORY[0x120020ec]/* 0x120020ec */ != 1 )
        return result;
      result = sub_1593480(
                 a1: v8,
                 a2: v7,
                 a3: v17,
                 a4: MEMORY[0x120022d8]/* 0x120022d8 */ + 302000160LL,
                 a5: (_BYTE *)(MEMORY[0x120022d8]/* 0x120022d8 */ + 302000160LL));
      if ( (_DWORD)result == 0 )
        return result;
      v15 = 12;
    }
LABEL_36:
    *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v15) = v20 == 43;
    result = (unsigned int)(v15 + 13);
    *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * result) = 0;
    return result;
  }
  v9 = 0;
  while ( (int)v9 < 13 )
  {
    for ( i = 0; ; ++i )
    {
      v11 = i;
      if ( *(_BYTE *)(*(int *)(4LL * (int)v9 + 0x120022A8) + 0x12002820LL + i) == 0
        || a6[i] != *(_BYTE *)(*(int *)(4LL * (int)v9 + 0x120022A8) + 0x12002820LL + i) )
      {
        break;
      }
    }
    v12 = v9 + 1;
    if ( *(_BYTE *)(*(int *)(4LL * (int)v9 + 0x120022A8) + 0x12002820LL + i) != 0 )
    {
      v9 = v12;
    }
    else
    {
      v13 = &a6[i];
      if ( &a6[v11] != nullptr )
      {
        if ( a6[v11] == 61 )
        {
          v14 = *(_BYTE *)((int)v9 + 0x120020E0LL);
          v16 = v13 + 1;
          switch ( v14 )
          {
            case 2:
            case 3:
              v18 = (int)v9 + 13;
              v19 = (int)v9;
              sub_15939C0(a1: (int)v9, a2: v9, a3: v16, a4: 302000160, a5);
              *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v19) = *a5;
              *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v18) = 0;
              return a3;
            case 4:
              *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL * (int)v9) = v16;
              result = *(_QWORD *)(a3 + 8);
              *(_QWORD *)(result + 8LL * ((int)v9 + 13)) = v13 + 1 == nullptr;
              return result;
            default:
              break;
          }
          v9 = v12;
        }
        else
        {
          v9 = v12;
        }
      }
      else
      {
        v9 = v12;
      }
    }
  }
  return result;
}
