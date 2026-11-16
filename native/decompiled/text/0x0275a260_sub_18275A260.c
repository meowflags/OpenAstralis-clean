// sub_18275A260
// rva 0x0275a260  size 439  section .text  group text
// window base 0x18275a260: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18275A260(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  _DWORD *v5; // rbx
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r9
  __int16 v11; // bp
  _DWORD *v12; // rcx
  int v13; // r8d
  __int64 result; // rax
  __int64 v15; // rdx
  int i; // ebp
  char v17; // [rsp+0h] [rbp-18h] BYREF
  __int64 v18; // [rsp+8h] [rbp-10h]
  _DWORD *v19; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v7 + 8) )
  {
    v19 = a5;
    v18 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_22;
  }
  v8 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v8 == 0 )
  {
LABEL_22:
    v19 = a5;
    v18 = a3;
    sub_182771080(a1, a2, a3, a4, (_DWORD)a5, a6: v8, a7: v17);
  }
  else if ( a5 != v6 )
  {
    v9 = (unsigned int)v6[2 * v8 + 5];
    if ( (_DWORD)v9 == 0 )
    {
LABEL_24:
      v19 = a5;
      v18 = a3;
      sub_182771080(a1, a2, a3, a4, (_DWORD)a5, a6: v8, a7: v17);
      goto LABEL_25;
    }
    v10 = *a5 >> 3;
    LOWORD(v5) = HIWORD(v6[2 * v10 + 15]);
    v11 = v6[2 * v9 + 15];
    v12 = &v6[2 * v6[2 * v10 + 4]];
    if ( v11 < 0 )
      goto LABEL_9;
    if ( (__int16)v5 > v11 )
    {
      v19 = a5;
      v18 = a3;
      v15 = (unsigned __int16)v11;
      result = v6[2 * v9 + 9] == v12[(unsigned __int16)v11 + 3];
      goto LABEL_11;
    }
    v19 = a5;
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = (_DWORD)v6 + 8 * v6[2 * v10 + 3];
        v18 = a3;
        v9 = sub_18275BEC0(a1, a2, a3, a4: a3, a5: v13, a6: (int)v6 + 373281248, a7: v17);
LABEL_9:
        v19 = a5;
        v18 = a3;
        result = (unsigned int)v6[2 * v9 + 10];
        if ( (int)result < 0x10000 )
          break;
        v15 = (unsigned int)(2 * SLOWORD(v6[2 * v10 + 16]));
        for ( i = 0; (int)v15 > i; i += 2 )
        {
          a2 = 4 * ((__int16)v5 + i) + 12;
          if ( (_DWORD)result == *(_DWORD *)((char *)v12 + a2) )
            goto LABEL_12;
        }
        a3 = v18;
      }
      v5 = &v6[2 * v6[2 * v10 + 5]];
      v15 = (unsigned __int16)*(_DWORD *)((char *)v5
                                        + (int)(4
                                              * (v6[2 * v10 + 11] & ((unsigned int)result >> HIBYTE(v6[2 * v10 + 11])))
                                              + 12));
      result = (_DWORD)result == (_DWORD)v15;
LABEL_11:
      if ( (_DWORD)result != 0 )
        break;
LABEL_25:
      a3 = v18;
    }
LABEL_12:
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_18277F280(a1, a2, a3: v15);
    return result;
  }
  v18 = a3;
  sub_182771080(a1, a2, a3, a4, (_DWORD)a5, a6: v8, a7: v17);
  goto LABEL_24;
}
