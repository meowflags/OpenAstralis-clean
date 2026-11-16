// sub_5020720
// rva 0x05020720  size 627  section .text  group text
// window base 0x185020720: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5020720(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  unsigned int v6; // ebx
  int v7; // ebp
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 j; // rcx
  int v12; // r10d
  int i; // edx
  int v14; // edx
  int v15; // r11d
  int v16; // r12d
  __int64 v17; // rdx
  int v18; // r8d
  int v20; // r8d
  _DWORD v21[3]; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+Ch] [rbp-Ch]
  int v23; // [rsp+10h] [rbp-8h]
  unsigned int v24; // [rsp+14h] [rbp-4h]

  j = a5;
  v24 = a5;
  v23 = a2;
  if ( (unsigned __int64)v21 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a6 != v8 )
  {
    v6 = *(_DWORD *)(a6 + 8);
    if ( v6 == 0 )
    {
LABEL_45:
      sub_2771220(a1, a2, a3: 0, a4: j, a5: 0);
      goto LABEL_46;
    }
    v7 = *(unsigned __int8 *)(a6 + 12);
    v12 = a5 - a1;
    for ( i = a2; ; i = v16 )
    {
      while ( 1 )
      {
        if ( i > v12 )
        {
          if ( *(int *)(v9 + 16) <= 0 )
            sub_277F280();
          return 0xFFFFFFFFLL;
        }
        if ( v7 == *(unsigned __int16 *)(a3 + 2 * i + 12) )
        {
          v15 = i;
        }
        else
        {
          v14 = i + 1;
          if ( v14 > v12 )
          {
            v15 = v14;
          }
          else if ( v7 == *(unsigned __int16 *)(a3 + 2 * v14 + 12) )
          {
            v15 = v14;
          }
          else
          {
            while ( 1 )
            {
              if ( v14 + 1 > v12 )
              {
                v15 = v14 + 1;
                goto LABEL_14;
              }
              if ( v7 == *(unsigned __int16 *)(a3 + 2 * (v14 + 1) + 12) )
                break;
              if ( *(int *)(v9 + 16) <= 0 )
              {
LABEL_46:
                a3 = sub_277F280();
                v14 = v20;
              }
              else
              {
                ++v14;
              }
            }
            v15 = v14 + 1;
          }
        }
LABEL_14:
        v22 = v15;
        v16 = v15 + 1;
        if ( v15 <= v12 )
          break;
        if ( *(int *)(v9 + 16) <= 0 )
          a3 = sub_277F280();
        i = v16;
      }
      v17 = (unsigned int)(v15 + a1);
      if ( (int)v17 <= v16 )
      {
        j = 1;
        v18 = v15 + 1;
        goto LABEL_17;
      }
      if ( v6 < 2 )
        break;
      if ( *(unsigned __int8 *)(a6 + 13) == *(unsigned __int16 *)(a3 + 2 * v16 + 12) )
      {
        v18 = v15 + 2;
        for ( j = 2; (int)v17 > v18; j = (unsigned int)(j + 1) )
        {
          a2 = *(unsigned __int16 *)(a3 + 2 * v18 + 12);
          if ( v6 <= (unsigned int)j )
            goto LABEL_48;
          if ( *(unsigned __int8 *)(a6 + j + 12) != (_DWORD)a2 )
            break;
          ++v18;
        }
      }
      else
      {
        j = 1;
        v18 = v15 + 1;
      }
LABEL_17:
      if ( v18 == (_DWORD)v17 )
      {
        if ( *(int *)(v9 + 16) <= 0 )
          sub_277F280(a1, a2, a3: v17, a4: j);
        return v22;
      }
      if ( *(int *)(v9 + 16) <= 0 )
        a3 = sub_277F280(a1, a2, a3: v17, a4: j);
    }
    sub_2771220(a1, a2: (unsigned int)v17, a3: 1, a4: j, a5: 1);
LABEL_48:
    v21[2] = v18;
    sub_2771220(a1, a2: (unsigned int)v17, a3: (unsigned int)j, a4: j, a5: v6);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_50209A0();
  }
  sub_2771080();
  goto LABEL_45;
}
