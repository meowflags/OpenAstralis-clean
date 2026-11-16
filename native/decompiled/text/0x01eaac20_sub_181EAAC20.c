// sub_181EAAC20
// rva 0x01eaac20  size 445  section .text  group text
// window base 0x181eaac20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char *__fastcall sub_181EAAC20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, _QWORD *a6)
{
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  signed __int64 v15; // rbx
  char *v16; // rbx

  if ( (unsigned int)MEMORY[0x182778A40](a1, a2, a3, a4, a5: 16, a6: 0x7FFFFFFF) == 0 )
    goto LABEL_5;
  while ( 1 )
  {
    v10 = *(_QWORD **)(a3 + 8);
    if ( v10 != a6 )
    {
      v15 = v10[4];
      if ( a5 <= *v10 - v15 )
      {
        if ( v15 == __sync_val_compare_and_swap(v10 + 4, v15, v15 + a5) )
        {
LABEL_9:
          v16 = (char *)v10 + v15;
          if ( v16 != nullptr )
          {
            *(_DWORD *)(a3 + 16) = 0;
            __faststorefence();
            return v16;
          }
        }
        else
        {
          while ( 1 )
          {
            v15 = v10[4];
            if ( a5 > *v10 - v15 )
              break;
            if ( v15 == __sync_val_compare_and_swap(v10 + 4, v15, v15 + a5) )
              goto LABEL_9;
          }
        }
      }
    }
    v11 = (_QWORD *)sub_181EAADE0();
    v14 = v11[4];
    if ( a5 <= *v11 - v14 )
    {
      v11[4] = a5 + v14;
      if ( (_QWORD *)((char *)v11 + v14) != nullptr )
        break;
    }
    MEMORY[0x1828C1C40](a1: v12, a2: v13, a3: v6 + 368735896);
LABEL_5:
    while ( (unsigned int)MEMORY[0x182778A40](a1: v8, a2: v9, a3, a4: v7, a5: 16, a6: 0x7FFFFFFF) == 0 )
      ;
  }
  *(_QWORD *)(a3 + 8) = v11;
  *(_DWORD *)(a3 + 16) = 0;
  __faststorefence();
  return (char *)v11 + v14;
}
