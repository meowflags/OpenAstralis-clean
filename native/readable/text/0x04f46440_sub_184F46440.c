// sub_4F46440
// rva 0x04f46440  size 509  section .text  group text
// window base 0x184f46440: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F46440(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  int v6; // ebx
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v14; // rsi
  unsigned int v15; // edx
  unsigned int v16; // edx
  __int64 v17; // r10
  unsigned int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // r10d
  unsigned int v21; // edx
  __int64 v22; // [rsp+0h] [rbp-8h] BYREF

  v10 = a3;
  v11 = a5;
  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4: a5);
    goto LABEL_39;
  }
  v6 = a6 + a5;
  if ( (int)(a6 + a5) > (int)a5 )
  {
    v7 = a5 + 1;
    if ( a3 != v8 )
    {
      v14 = *(unsigned int *)(a3 + 8);
      if ( (unsigned int)v14 > a5 )
      {
        v15 = *(unsigned __int16 *)(a3 + 2LL * a5 + 12);
        if ( v15 < 0xD800 )
        {
          v16 = a6;
          goto LABEL_13;
        }
        if ( v15 >= 0xDC00 )
        {
          v16 = a6;
          goto LABEL_13;
        }
        if ( v6 <= (int)v7 )
        {
          v16 = a6;
LABEL_13:
          v12 = v16;
          while ( 1 )
          {
            if ( v6 <= (int)v7 )
              goto LABEL_4;
            v17 = (unsigned int)(v7 + 1);
            if ( (unsigned int)v14 <= (unsigned int)v7 )
              break;
            v18 = *(unsigned __int16 *)(v10 + 2 * v7 + 12);
            if ( v18 >= 0xD800 && v18 < 0xDC00 )
            {
              if ( v6 > (int)v17 )
              {
                if ( (unsigned int)v14 <= (unsigned int)v17 )
                {
LABEL_43:
                  v10 = sub_2771220(a1: v12, a2: v14, a3: (unsigned int)v17, a4: v11, a5: (unsigned int)v14);
LABEL_44:
                  v7 = (unsigned int)v17;
                }
                else
                {
                  if ( *(int *)(v9 + 16) <= 0 )
                    v10 = sub_277F280(a1: v12);
                  v19 = *(unsigned __int16 *)(v10 + 2 * v17 + 12);
                  if ( v19 < 0xDC00 )
                  {
                    v7 = (unsigned int)v17;
                  }
                  else
                  {
                    if ( v19 >= 0xE000 )
                      goto LABEL_44;
                    v12 = (unsigned int)(v12 - 1);
                    v7 = (unsigned int)(v7 + 2);
                  }
                }
              }
              else if ( *(int *)(v9 + 16) <= 0 )
              {
LABEL_30:
                v10 = sub_277F280(a1: v12);
                v7 = v20;
              }
              else
              {
                v7 = (unsigned int)v17;
              }
            }
            else
            {
              if ( *(int *)(v9 + 16) <= 0 )
                goto LABEL_30;
              v7 = (unsigned int)v17;
            }
          }
LABEL_42:
          sub_2771220(a1: v12, a2: v14, a3: (unsigned int)v7, a4: v11, a5: (unsigned int)v14);
          goto LABEL_43;
        }
        if ( (unsigned int)v14 > (unsigned int)v7 )
        {
          v21 = *(unsigned __int16 *)(v10 + 2 * v7 + 12);
          if ( v21 < 0xDC00 )
          {
            v16 = a6;
          }
          else if ( v21 >= 0xE000 )
          {
            v16 = a6;
          }
          else
          {
            v16 = a6 - 1;
            v7 = a5 + 2;
          }
          goto LABEL_13;
        }
LABEL_41:
        sub_2771220(a1, a2: v14, a3: (unsigned int)v7, a4: v11, a5: (unsigned int)v14);
        goto LABEL_42;
      }
LABEL_40:
      sub_2771220(a1, a2: v14, a3: (unsigned int)v11, a4: v11, a5: (unsigned int)v14);
      goto LABEL_41;
    }
LABEL_39:
    sub_2771080();
    goto LABEL_40;
  }
  v12 = a6;
LABEL_4:
  if ( *(int *)(v9 + 16) <= 0 )
    sub_277F280(a1: v12);
  return (unsigned int)v12;
}
