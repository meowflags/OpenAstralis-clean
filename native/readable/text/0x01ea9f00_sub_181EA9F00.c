// sub_1EA9F00
// rva 0x01ea9f00  size 715  section .text  group text
// window base 0x181ea9f00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char *__fastcall sub_1EA9F00(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5, int a6)
{
  __int64 v6; // r14
  char *result; // rax
  __int64 v8; // rbp
  _DWORD *v9; // rbp
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r10
  unsigned int *v12; // rdx
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r11
  __int64 v15; // rbx
  __int64 v16; // rcx
  unsigned int *v17; // rcx
  __int64 v18; // rdi
  unsigned __int64 v19; // [rsp+20h] [rbp-58h]
  unsigned __int64 v20; // [rsp+28h] [rbp-50h]
  _DWORD *v21; // [rsp+40h] [rbp-38h]
  unsigned int *v22; // [rsp+48h] [rbp-30h]
  char *v23; // [rsp+58h] [rbp-20h]
  __int64 v24; // [rsp+60h] [rbp-18h]
  int v25; // [rsp+6Ch] [rbp-Ch]
  unsigned int *v26; // [rsp+70h] [rbp-8h]

  result = (char *)a5 + (int)a1 * (unsigned __int64)a4;
  if ( result > (char *)a5 )
  {
    if ( a6 != 0 )
      v8 = v6 + 8LL * *a5;
    else
      v8 = *(_QWORD *)a5;
    v26 = a5;
    v25 = a6;
    v24 = (int)a1;
    v23 = (char *)a5 + (int)a1 * (unsigned __int64)a4;
    v9 = (_DWORD *)(v8 - v6);
    if ( v9 != nullptr )
      v9 = (_DWORD *)((char *)v9 + v6);
    v10 = v6 + 8LL * *(unsigned int *)(v6 + 58177844);
    v20 = v10;
    v11 = v6 + 8LL * *(unsigned int *)(v6 + 58177848);
    v19 = v11;
    if ( v9 != nullptr )
    {
      if ( v10 == v6 )
        JUMPOUT(0x303D33F89LL);
      if ( v10 > (unsigned __int64)v9 )
        goto LABEL_12;
      if ( v11 == v6 )
        JUMPOUT(0x303D34141LL);
      if ( (unsigned __int64)v9 > v11 )
      {
LABEL_12:
        if ( ((unsigned __int64)v9 < *(_QWORD *)(v6 + 376612552) || (unsigned __int64)v9 >= *(_QWORD *)(v6 + 376612568))
          && (*v9 & 1) == 0 )
        {
          if ( sub_1EA8F40(a1, a2, a3: (unsigned __int64)v9) != 0 )
            JUMPOUT(0x303D34194LL);
          a6 = v25;
          a5 = v26;
          if ( v25 != 0 )
            *v26 = 0;
          else
            *(_QWORD *)v26 = v6;
        }
      }
    }
    v12 = (unsigned int *)((char *)a5 + v24);
    v13 = v19;
    v14 = v20;
    result = v23;
    v15 = v24;
    while ( result > (char *)v12 )
    {
      if ( a6 != 0 )
        v16 = v6 + 8LL * *v12;
      else
        v16 = *(_QWORD *)v12;
      v17 = (unsigned int *)(v16 - v6);
      if ( v17 != nullptr )
        v17 = (unsigned int *)((char *)v17 + v6);
      if ( v17 != nullptr )
      {
        if ( v14 == v6 )
          JUMPOUT(0x303D3403DLL);
        if ( v14 > (unsigned __int64)v17 )
          goto LABEL_23;
        if ( v13 == v6 )
          JUMPOUT(0x303D3407FLL);
        if ( (unsigned __int64)v17 > v13 )
        {
LABEL_23:
          if ( (unsigned __int64)v17 >= *(_QWORD *)(v6 + 376612552)
            && (unsigned __int64)v17 < *(_QWORD *)(v6 + 376612568) )
          {
            v12 = (unsigned int *)((char *)v12 + v15);
          }
          else
          {
            v18 = *v17;
            if ( (v18 & 1) != 0 )
            {
              v12 = (unsigned int *)((char *)v12 + v15);
            }
            else
            {
              v22 = (unsigned int *)((char *)v12 + v15);
              v21 = v12;
              if ( sub_1EA8F40(a1: v18, a2: (__int64)v17, a3: (unsigned __int64)v17) != 0 )
                JUMPOUT(0x303D340B8LL);
              a6 = v25;
              if ( v25 != 0 )
                *v21 = 0;
              else
                *(_QWORD *)v21 = v6;
              v12 = v22;
              v13 = v19;
              v14 = v20;
              result = v23;
              v15 = v24;
            }
          }
        }
        else
        {
          v12 = (unsigned int *)((char *)v12 + v15);
        }
      }
      else
      {
        v12 = (unsigned int *)((char *)v12 + v15);
      }
    }
  }
  return result;
}
